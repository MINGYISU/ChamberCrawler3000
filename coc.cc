#include "coc.h"

ChamberOfCommerce::ChamberOfCommerce():
    manhunt{false} {
        refreshStore();
    }

ChamberOfCommerce::~ChamberOfCommerce() { }

void ChamberOfCommerce::warning() { manhunt = true; } // A merchant was attacked, become hostile

bool ChamberOfCommerce::wanted() { return manhunt; }

int ChamberOfCommerce::price(string g) {
    if (g == "RH") return 1;
    else if (g == "BD") return 3;
    else if (g == "BA") return 5;
    else return -1;
}

std::string ChamberOfCommerce::randPot() {
    int ran = rand() % 6;
    if (ran == 0) return "BA";
    else if (1 <= ran && ran <= 2) return "BD";
    else return "RH";
}

void ChamberOfCommerce::refreshStore() {
    srand(time(0));
    for (int i = store.size(); i < 5; ++i) {
        string pt = randPot();
        store.push_back(pt);
    }
}

std::string ChamberOfCommerce::getAt(int which) {
    int stsize = static_cast<int>(store.size());
    if (which < 0 || which >= stsize) return "INVALID";
    return store.at(which);
}

void ChamberOfCommerce::sell(int which) {
    int ss = static_cast<int>(store.size());
    if (which < 0 || which >= ss) return ;
    store.erase(store.begin() + which);
}

void ChamberOfCommerce::display() {
    cout << "    ,-\"=-." << endl;
    cout << "   .       \\" << endl;
    cout << "   \"=\'\"=\\   \'" << endl;
    cout << "   `@] @'|   )" << endl;
    cout << "   ) ` ' ),-`" << endl;
    cout << "    \\^_,  \\,  " << endl;
    cout << "  gpyy,(\\,/ )`-." << endl;
    cout << "| Great to meet you my friend! |" << endl;
    cout << "| I am the Enigmatic Peddler of Wonders, |" << endl;
    cout << "| a member of the Chamber of Commerce! |" << endl;
    cout << "| Have a look at Today's New! |" << endl;
    for (int i = 0; i < 60; i ++) { cout << '-'; }
    cout << endl;
    int ssize = static_cast<int>(store.size());
    for (int i = 0; i < ssize; ++i) {
        cout << i <<  ": " << store.at(i) << " ";
    }
}

int ChamberOfCommerce::getSize() {
    int s = static_cast<int>(store.size());
    return s;
}
