//
//  STMArticleGroup+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMArticleGroup+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMArticleGroup (CoreDataProperties)

+ (NSFetchRequest<STMArticleGroup *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *commentText;
@property (nullable, nonatomic, copy) NSDate *deviceCts;
@property (nullable, nonatomic, copy) NSDate *deviceTs;
@property (nullable, nonatomic, copy) NSNumber *id;
@property (nullable, nonatomic, copy) NSNumber *isFantom;
@property (nullable, nonatomic, copy) NSDate *lts;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, copy) NSString *source;
@property (nullable, nonatomic, copy) NSString *target;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) NSSet<STMArticle *> *articles;
@property (nullable, nonatomic, retain) STMArticleGroup *articleGroup;
@property (nullable, nonatomic, retain) NSSet<STMArticleGroup *> *articleGroups;
@property (nullable, nonatomic, retain) NSSet<STMArticleGroup *> *children;
@property (nullable, nonatomic, retain) NSSet<STMArticleGroup *> *parents;

@end

@interface STMArticleGroup (CoreDataGeneratedAccessors)

- (void)addArticlesObject:(STMArticle *)value;
- (void)removeArticlesObject:(STMArticle *)value;
- (void)addArticles:(NSSet<STMArticle *> *)values;
- (void)removeArticles:(NSSet<STMArticle *> *)values;

- (void)addArticleGroupsObject:(STMArticleGroup *)value;
- (void)removeArticleGroupsObject:(STMArticleGroup *)value;
- (void)addArticleGroups:(NSSet<STMArticleGroup *> *)values;
- (void)removeArticleGroups:(NSSet<STMArticleGroup *> *)values;

- (void)addChildrenObject:(STMArticleGroup *)value;
- (void)removeChildrenObject:(STMArticleGroup *)value;
- (void)addChildren:(NSSet<STMArticleGroup *> *)values;
- (void)removeChildren:(NSSet<STMArticleGroup *> *)values;

- (void)addParentsObject:(STMArticleGroup *)value;
- (void)removeParentsObject:(STMArticleGroup *)value;
- (void)addParents:(NSSet<STMArticleGroup *> *)values;
- (void)removeParents:(NSSet<STMArticleGroup *> *)values;

@end

NS_ASSUME_NONNULL_END
