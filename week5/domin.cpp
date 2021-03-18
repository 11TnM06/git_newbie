#include <iostream>
#include <ctime>
#include <random>
#include <chrono>
#include <string.h>
using namespace std; 

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int N = 11;
int m, n, k;
int noneMinePositions = 0;
int MinersBoard[N][N];
char MinersBoardDisplay[N][N];
int freLeftMouse[N][N];
int freRightMouse[N][N];
int directionX[] = {0,0,1,-1,1,-1,1,-1};
int directionY[] = {1,-1,0,0,-1,1,1,-1};

void Init() {
    for (int i = 0; i < 11; i++)
        for (int j = 0; j < 11; j++) 
        {
            MinersBoardDisplay[i][j] = '0';
        }
}
void scanElements() {
    cout << "Scan value of m: " << "\n";
    cin >> m;
    cout << "Scan value of n: " << "\n";
    cin >> n;
    cout << "Scan value of k: " << "\n";
    cin >> k;
}
void printMinersBoard() {
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; ++j) {
            cout << MinersBoard[i][j] << " ";
        }
        cout << "\n";
    }
}

void printMinersBoardDisplay() {
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; ++j) {
            cout << MinersBoardDisplay[i][j] << " ";
        }
        cout << "\n";
    }
}
void printResult(int x) {
    if( x == 1 ) cout << "Congratulation! You won\n";
    if( x == 0 ) cout << "Sorry! You lost! Please try again :(( \n"; 
}

void printError(int x) {
    if ( x == 0) cout << "Wrong Input Position\n";
    else if(x == 1) cout << "Wrong Input Click\n";
}
int rnd(int l,int r) {
    return l + rng() % ( r-l+1 );
}
bool checkArea(int u, int v) {
    return ( u > 0 && v > 0 && u <= m && v <= n );
}

// Tạo bảng và tạo mìn 
void creatRandomMiner() {
    int MinerLeft = k;
    int i = 0;
    int j = 0;
    while(MinerLeft > 0) {
        i = rnd(1,m);
        j = rnd(1,n);
        if(MinersBoard[i][j] == 9) continue;
        else {
            MinerLeft --;
            MinersBoard[i][j] = 9;
            for (int k = 0; k < 8; ++k) {
                int u = i + directionX[k];
                int v = j + directionY[k];
                if ( MinersBoard[u][v] != 9 && checkArea( u, v ) ) MinersBoard[u][v] ++; 
            }
        }
    }

    printMinersBoard();
    
}
void createMinerBoard() {
    if(k > m * n) 
        printError(0);
    else 
        creatRandomMiner();
    
}

// Bắt đầu chơi game
void bfs(int i, int j) {
    int l = 1;
    int r = 1;
    int queueX[1001], queueY[1001];
    
    for (int i_ = 0; i_ < 1001; ++i_) {
        queueX[i_] = 0;
        queueY[i_] = 0;
    }
    queueX[l] = i;
    queueY[l] = j;
    MinersBoardDisplay[i][j] = '_';
    while( l <= r ) {
        int u = queueX[l];
        int v = queueY[l];
        for (int i_ = 0; i_ < 8; ++i_) {
            int u_ = u + directionX[i_];
            int v_ = v + directionY[i_];
            if( checkArea( u_, v_ ) == false || freLeftMouse[u_][v_] != 0 ) 
                continue;
            if( MinersBoard[u_][v_] == 0) {
                r++;
                queueX[r] = u_;
                queueY[r] = v_;
                MinersBoardDisplay[u_][v_] = '_';
            }
            else {
                MinersBoardDisplay[u_][v_] = '0' + MinersBoard[u_][v_];
            }
            //cout << u_ << " " << v_ << "\n";
            freLeftMouse[u_][v_] = 1;
            
        }
        l++; 
    }
}

void playGame() {
    int MinerLeft = k;
    int positionX, positionY;
    int click = 0;
    
    while( true ) {
        if( noneMinePositions == m*n - MinerLeft ) {
            printResult(1);
            break;
        }
        cout << "Scan Value of X and Y and Click respectively: ";
        cin >> positionX >> positionY >> click;
        if( click == 0 && freLeftMouse[positionX][positionY] == 0 ) {
            if( MinersBoard[positionX][positionY] == 9 ) {
                if( freRightMouse[positionX][positionY] == 0 ) {
                    freRightMouse[positionX][positionY] = 1;
                    MinersBoardDisplay[positionX][positionY] = '!';
                    MinerLeft --;
                }
                else {
                    MinerLeft ++;
                    MinersBoardDisplay[positionX][positionY] = '0';
                    freRightMouse[positionX][positionY] = 0;
                }
            }
            else {
                if( freRightMouse[positionX][positionY] == 0 ) {
                    freRightMouse[positionX][positionY] = 1;
                    MinersBoardDisplay[positionX][positionY] = '!';
                }
                else {
                    freRightMouse[positionX][positionY] = 0;
                    MinersBoardDisplay[positionX][positionY] = '0';
                }
            }   
            printMinersBoardDisplay();
            continue;
        }
        else if( click == 0 && freLeftMouse[positionX][positionY] == 1 ) {
            printError(1);
            continue;
        }
        if( MinersBoard[positionX][positionY] == 9 ) {
            
            if(click == 1) 
                printResult(0);
            break;
        }
        if( checkArea( positionX, positionY ) == false ) 
            cout << "Invalid Input \n";
        
        if( freLeftMouse[positionX][positionY] == 0 ) {
            freLeftMouse[positionX][positionY] = 1;
            MinersBoardDisplay[positionX][positionY] = '0' + MinersBoard[positionX][positionY];
            noneMinePositions++;
        }
        else {
            printError(0);
            continue;
        }
        if( MinersBoard[positionX][positionY] == 0 ) 
            bfs( positionX, positionY );
        printMinersBoardDisplay();
        
    }
}
int main () {
    //freopen("domin.inp", "r", stdin);
    srand(time(NULL));
    Init();
    scanElements();
    createMinerBoard();
    playGame();
    
}