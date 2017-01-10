//
//  STMArticlePicture+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 10/01/2017.
//  Copyright © 2017 Sistemium UAB. All rights reserved.
//

#import "STMArticlePicture+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMArticlePicture (CoreDataProperties)

+ (NSFetchRequest<STMArticlePicture *> *)fetchRequest;

@property (nullable, nonatomic, retain) NSSet<STMArticle *> *articles;

@end

@interface STMArticlePicture (CoreDataGeneratedAccessors)

- (void)addArticlesObject:(STMArticle *)value;
- (void)removeArticlesObject:(STMArticle *)value;
- (void)addArticles:(NSSet<STMArticle *> *)values;
- (void)removeArticles:(NSSet<STMArticle *> *)values;

@end

NS_ASSUME_NONNULL_END
