//
//  ULUserProfileData.h
//
//  Created by Alexey Talkan on 10.04.13.
//  Copyright (c) 2013 Alexey Talkan. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Класс инкапсулирующий данные пользователя
 */
@interface ULUserProfileData : NSObject
{
    /**
     Параметры пользователя
     */
    NSMutableDictionary *dictionaryRawData;
}

@property (readonly, getter = getRawData) NSDictionary *rawData;

/**
 Конструктор класса на основе JSON данных
 @param JSONData JSON данные
 @returns Указатель на экземпляр
 */
-(id) initWithData:(NSData*)Data;

/**
 Получение имени пользователя
 @returns Строка с именем пользователя или nil если такого поля в ответе сервера нет
 */
-(NSString*)FirstName;

/**
 Получение фамилии пользователя
 @returns Строка с фамилией пользователя или nil если такого поля в ответе сервера нет
 */
- (NSString*)LastName;

/**
 Получение ника пользователя
 @returns Строка с ником пользователя или nil если такого поля в ответе сервера нет
 */
-(NSString*)Nickname;

/**
 Получение пола пользователя
 @returns Строка с полом пользователя или nil если такого поля в ответе сервера нет
 */
-(NSString*)Sex;

/**
 Получение даты рождения пользователя
 @returns Строка с датой рождения пользователя или nil если такого поля в ответе сервера нет
 */
-(NSString*)BDate;

/**
 Получение страны пользователя
 @returns Строка со страной пользователя или nil если такого поля в ответе сервера нет
 */
-(NSString*)Country;

/**
 Получение ссылки на фото пользователя
 @returns Строка с ссылкой на фото пользователя или nil если такого поля в ответе сервера нет
 */
-(NSString*)Photo;

/**
 Получение ссылки на большое фото пользователя
 @returns Строка с ссылкой на большое фото пользователя или nil если такого поля в ответе сервера нет
 */
-(NSString*)PhotoBig;

/**
 Получение e-mail'а пользователя
 @returns Строка с e-mail'ом пользователя или nil если такого поля в ответе сервера нет
 */
-(NSString*)Email;

/**
 Получение ссылки на профиль пользователя
 @returns Строка с ссылкой на профиль пользователя или nil если такого поля в ответе сервера нет
 */
-(NSString*)Identity;

/**
 Получение ссылки на профиль пользователя
 @returns Строка с ссылкой на профиль пользователя или nil если такого поля в ответе сервера нет
 */
-(NSString*)Profile;

/**
 Получение UID пользователя
 @returns Строка с UID пользователя или nil если такого поля в ответе сервера нет
 */
-(NSString*)UID;

/**
 Получение списка полей которые пользователь ввел вручную
 @returns Строка со списком полей которые пользователь ввел вручную или nil если такого поля в ответе сервера нет
 */
-(NSString*)Manual;

/**
 Получение признака подтверждения пользователем e-mail'а
 @returns Строка содержащая признак подтверждения пользователем e-mail'а. Содержит -1 - "не подтвержден" или 1 - "подтвержден" или nil если такого поля в ответе сервера нет
 */
-(NSString*)VerifiedEmail;

/**
 Получение access_token для обращения к REST API соответствующей сети
 @returns Строка с access_token для обращения к REST API соответствующей сети или nil если такого поля в ответе сервера нет
 */
-(NSString*)AccessToken;

/**
 Получение описания ошибки
 @returns Строка с описанием ошибки или nil если такого поля в ответе сервера нет
 */
-(NSString*)Error;

@end
