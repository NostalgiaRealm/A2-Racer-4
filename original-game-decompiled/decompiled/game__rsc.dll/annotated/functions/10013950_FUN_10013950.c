
/* ==== FUN_10013950 @ 10013950 ==== 
 * signature: undefined __stdcall FUN_10013950(void)
 * body: 10013950-10013cfa
 */

void FUN_10013950(void)

{
  uint *_Str1;
  DWORD DVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  char *pcVar5;
  uint *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_100073f0(0xc);
  DAT_100316d8 = 0;
  DAT_10030e48 = 0xffffffff;
  DAT_10030e38 = 0xffffffff;
  _Str1 = (uint *)FID_conflict___getenv_lk("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10007490(0xc);
    DVar1 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_100316e0);
    if (DVar1 != 0xffffffff) {
      DAT_100316d8 = 1;
      DAT_10030da0 = DAT_100316e0 * 0x3c;
      if (DAT_10031726 != 0) {
        DAT_10030da0 = DAT_10030da0 + DAT_10031734 * 0x3c;
      }
      if ((DAT_1003177a == 0) || (DAT_10031788 == 0)) {
        DAT_10030da4 = 0;
        DAT_10030da8 = 0;
      }
      else {
        DAT_10030da4 = 1;
        DAT_10030da8 = (DAT_10031788 - DAT_10031734) * 0x3c;
      }
      iVar2 = WideCharToMultiByte(DAT_1003164c,0x220,(LPCWSTR)&DAT_100316e4,-1,PTR_DAT_10030e2c,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_10030e2c = 0;
      }
      else {
        PTR_DAT_10030e2c[0x3f] = 0;
      }
      iVar2 = WideCharToMultiByte(DAT_1003164c,0x220,(LPCWSTR)&DAT_10031738,-1,PTR_DAT_10030e30,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_10030e30 = 0;
      }
      else {
        PTR_DAT_10030e30[0x3f] = 0;
      }
    }
  }
  else if (((char)*_Str1 == '\0') ||
          ((DAT_1003178c != (uint *)0x0 &&
           (iVar2 = _strcmp((char *)_Str1,(char *)DAT_1003178c), iVar2 == 0)))) {
    FUN_10007490(0xc);
  }
  else {
    FUN_100041a0(DAT_1003178c,2);
    iVar2 = 0x10c;
    pcVar5 = "tzset.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)_Str1);
    DAT_1003178c = (uint *)FUN_10003710((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar2);
    if (DAT_1003178c == (uint *)0x0) {
      FUN_10007490(0xc);
    }
    else {
      FUN_10001ec0(DAT_1003178c,_Str1);
      FUN_10007490(0xc);
      _strncpy(PTR_DAT_10030e2c,(char *)_Str1,3);
      PTR_DAT_10030e2c[3] = 0;
      local_10 = (uint *)((int)_Str1 + 3);
      if (*(char *)local_10 == '-') {
        local_8 = local_8 + 1;
        local_10 = _Str1 + 1;
      }
      iVar2 = FUN_100136a0((byte *)local_10);
      DAT_10030da0 = iVar2 * 0xe10;
      for (; ((char)*local_10 == '+' || (('/' < (char)*local_10 && ((char)*local_10 < ':'))));
          local_10 = (uint *)((int)local_10 + 1)) {
      }
      if ((char)*local_10 == ':') {
        local_10 = (uint *)((int)local_10 + 1);
        iVar2 = FUN_100136a0((byte *)local_10);
        DAT_10030da0 = DAT_10030da0 + iVar2 * 0x3c;
        for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
            local_10 = (uint *)((int)local_10 + 1)) {
        }
        if ((char)*local_10 == ':') {
          local_10 = (uint *)((int)local_10 + 1);
          iVar2 = FUN_100136a0((byte *)local_10);
          DAT_10030da0 = DAT_10030da0 + iVar2;
          for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
              local_10 = (uint *)((int)local_10 + 1)) {
          }
        }
      }
      if (local_8 != 0) {
        DAT_10030da0 = -DAT_10030da0;
      }
      DAT_10030da4 = (int)(char)*local_10;
      if (DAT_10030da4 == 0) {
        *PTR_DAT_10030e30 = 0;
      }
      else {
        _strncpy(PTR_DAT_10030e30,(char *)local_10,3);
        PTR_DAT_10030e30[3] = 0;
      }
    }
  }
  return;
}


