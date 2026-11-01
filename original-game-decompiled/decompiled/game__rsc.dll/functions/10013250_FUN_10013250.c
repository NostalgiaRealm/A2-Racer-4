
/* ==== FUN_10013250 @ 10013250 ==== 
 * signature: BOOL __cdecl FUN_10013250(DWORD param_1, LPCWSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6)
 * body: 10013250-10013376
 */

BOOL __cdecl
FUN_10013250(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  undefined1 *puVar1;
  BOOL BVar2;
  size_t _Size;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002d870;
  pcStack_10 = FUN_1000eb08;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffbc;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffbc;
  if (DAT_100316d4 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100316d4 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_100316d4 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_100316d4 == 1) {
    BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_100316d4 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_1003164c;
    }
    _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (_Size == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_10008bb0();
      local_1c = &stack0xffffffbc;
      _memset(&stack0xffffffbc,0,_Size);
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x44) {
        BVar2 = 0;
      }
      else {
        iVar3 = WideCharToMultiByte(param_5,0x220,param_2,param_3,&stack0xffffffbc,_Size,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
        if (iVar3 == 0) {
          BVar2 = 0;
        }
        else {
          local_8 = 1;
          FUN_10008bb0();
          local_8 = 0xffffffff;
          if (&stack0x00000000 == (undefined1 *)0x44) {
            BVar2 = 0;
          }
          else {
            if (param_6 == 0) {
              param_6 = DAT_1003163c;
            }
            *(undefined2 *)(&stack0xffffffbc + param_3 * 2) = 0xffff;
            *(undefined2 *)(&stack0xffffffba + param_3 * 2) = 0xffff;
            local_1c = &stack0xffffffbc;
            BVar2 = GetStringTypeA(param_6,param_1,&stack0xffffffbc,_Size,(LPWORD)&stack0xffffffbc);
            if ((*(short *)(&stack0xffffffba + param_3 * 2) == -1) ||
               (*(short *)(&stack0xffffffbc + param_3 * 2) != -1)) {
              BVar2 = 0;
            }
            else {
              FUN_1000dda0((undefined4 *)param_4,(undefined4 *)&stack0xffffffbc,param_3 << 1);
            }
          }
        }
      }
    }
  }
  else {
    BVar2 = 0;
  }
  ExceptionList = local_14;
  return BVar2;
}


