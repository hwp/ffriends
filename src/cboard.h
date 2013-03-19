// cboard.h
// Class header for client board data
//
// Author : Weipeng He <heweipeng@gmail.com>
// Copyright (c) 2013, All rights reserved.

#ifndef SRC_CBOARD_H_
#define SRC_CBOARD_H_

#include <vector>

class CBoard {
  Q_OBJECT

  public:
    CBoard(const vector<Player>& players, const vector<Card>& cards, int start);

  public slots:
    void takeMove(Move m);

  signals:
    void changed();

  private:
    vector<Player> pls;             // Players, index 0 is the current player
    vector<Card> cds;               // Cards of the player
    vector<Card> cob;               // Current cards on board
    vector<vector<Card> > scores;   // Score cards of each player
    int np;                         // Id of the next player
    int stage;                      // The current stage of the game
};

#endif  // SRC_CBOARD_H_

