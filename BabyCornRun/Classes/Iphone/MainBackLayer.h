//
//  MainBackLayer.h
//  BabyCornRun
//
//  Created by Kang Yong on 3/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Box2D.h"

@class Player;
@class GLESDebugDraw;
@class ContactListener;

@interface MainBackLayer : CCLayer {
    
    b2World * world;    
    Player *player1;
    GLESDebugDraw *m_debugDraw;   
    CCTexture2D *groundTex;
    ContactListener * _contactListener;
    b2Vec2  nextloc;
    float terrainY;
    int jumpPos;
    bool isLoadedData;
}

+(CCScene *) scene;
-(void)createWorld;
-(void)createTerrain;

@end