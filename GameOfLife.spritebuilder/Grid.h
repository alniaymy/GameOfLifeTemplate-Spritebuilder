//
//  Grid.h
//  GameOfLife
//
//  Created by Nabeel Salih on 2014-10-21.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end
