
/* ==== FUN_0056352a @ 0056352a ==== 
 * signature: undefined __stdcall FUN_0056352a(void)
 * body: 0056352a-00563787
 */

void FUN_0056352a(void)

{
  char cVar1;
  char cVar2;
  uint *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  void *this;
  uint *_Source;
  int local_4;
  
  DAT_0074de90 = 0;
  DAT_005c8d00 = 0xffffffff;
  DAT_005c8cf0 = 0xffffffff;
  _Str1 = (uint *)FUN_0055a328("TZ");
  if (_Str1 == (uint *)0x0) {
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_0074de98);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_005c8c58 = (void *)(DAT_0074de98 * 0x3c);
    DAT_0074de90 = 1;
    if (DAT_0074dede != 0) {
      DAT_005c8c58 = (void *)((int)DAT_005c8c58 + DAT_0074deec * 0x3c);
    }
    if ((DAT_0074df32 == 0) || (DAT_0074df40 == 0)) {
      DAT_005c8c5c = 0;
      DAT_005c8c60 = 0;
    }
    else {
      DAT_005c8c5c = 1;
      DAT_005c8c60 = (DAT_0074df40 - DAT_0074deec) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_0074dcf4,0x220,(LPCWSTR)&DAT_0074de9c,-1,PTR_DAT_005c8ce4,0x3f,
                                (LPCSTR)0x0,&local_4);
    if ((iVar4 == 0) || (local_4 != 0)) {
      *PTR_DAT_005c8ce4 = 0;
    }
    else {
      PTR_DAT_005c8ce4[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_0074dcf4,0x220,(LPCWSTR)&DAT_0074def0,-1,PTR_DAT_005c8ce8,0x3f,
                                (LPCSTR)0x0,&local_4);
    if ((iVar4 != 0) && (local_4 == 0)) {
      PTR_DAT_005c8ce8[0x3f] = 0;
      return;
    }
  }
  else {
    if ((char)*_Str1 == '\0') {
      return;
    }
    if ((DAT_0074df44 != (uint *)0x0) &&
       (iVar4 = _strcmp((char *)_Str1,(char *)DAT_0074df44), iVar4 == 0)) {
      return;
    }
    FUN_00559d4e(DAT_0074df44);
    sVar5 = _strlen((char *)_Str1);
    DAT_0074df44 = _malloc(sVar5 + 1);
    if (DAT_0074df44 == (uint *)0x0) {
      return;
    }
    FUN_0055ee40(DAT_0074df44,_Str1);
    _strncpy(PTR_DAT_005c8ce4,(char *)_Str1,3);
    _Source = (uint *)((int)_Str1 + 3);
    PTR_DAT_005c8ce4[3] = 0;
    cVar1 = *(char *)_Source;
    if (cVar1 == '-') {
      _Source = _Str1 + 1;
    }
    iVar4 = FUN_005592b2(this,(byte *)_Source);
    DAT_005c8c58 = (void *)(iVar4 * 0xe10);
    for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
        _Source = (uint *)((int)_Source + 1)) {
    }
    if ((char)*_Source == ':') {
      _Source = (uint *)((int)_Source + 1);
      iVar4 = FUN_005592b2(DAT_005c8c58,(byte *)_Source);
      DAT_005c8c58 = (void *)((int)DAT_005c8c58 + iVar4 * 0x3c);
      for (; ('/' < (char)*_Source && ((char)*_Source < ':')); _Source = (uint *)((int)_Source + 1))
      {
      }
      if ((char)*_Source == ':') {
        _Source = (uint *)((int)_Source + 1);
        iVar4 = FUN_005592b2(DAT_005c8c58,(byte *)_Source);
        DAT_005c8c58 = (void *)((int)DAT_005c8c58 + iVar4);
        for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
            _Source = (uint *)((int)_Source + 1)) {
        }
      }
    }
    if (cVar1 == '-') {
      DAT_005c8c58 = (void *)-(int)DAT_005c8c58;
    }
    DAT_005c8c5c = (int)(char)*_Source;
    if (DAT_005c8c5c != 0) {
      _strncpy(PTR_DAT_005c8ce8,(char *)_Source,3);
      PTR_DAT_005c8ce8[3] = 0;
      return;
    }
  }
  *PTR_DAT_005c8ce8 = 0;
  return;
}


