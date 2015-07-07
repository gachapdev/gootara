//
//  Item.h
//  gootara
//
//  Created by Hiroto Takahashi on 7/6/15.
//
//

#ifndef __gootara__Item__
#define __gootara__Item__

#include <stdio.h>
#include "cocos2d.h"
USING_NS_CC;

class Item {
public:
    Item();
    ~Item();
    int id;
    std::string name;
};


#endif /* defined(__gootara__Item__) */
