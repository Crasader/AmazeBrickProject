//
//  LeaderboardAdaptor.h
//  KGI2001
//
//  Created by wuguiling on 15/7/13.
//
//

#ifndef __KGI2001__LeaderboardAdaptor__
#define __KGI2001__LeaderboardAdaptor__

#include <iostream>
using namespace std;

class LeaderboardAdaptor {
    
    
public:
    static void authenticateLocalPlayer();
    
    static void submitScore(size_t score,const char* category);
    
    static void showLeaderboard();
    
    static void requestScore(std::function<void(int)> callback);
};
#endif /* defined(__KGI2001__LeaderboardAdaptor__) */
