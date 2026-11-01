
/* ==== FUN_10003050 @ 10003050 ==== 
 * signature: undefined4 __cdecl FUN_10003050(int param_1, int param_2, int param_3, undefined4 param_4, byte * param_5)
 * body: 10003050-100033df
 */

undefined4 __cdecl
FUN_10003050(int param_1,int param_2,int param_3,undefined4 param_4,byte *param_5)

{
  bool bVar1;
  LONG LVar2;
  size_t nNumberOfBytesToWrite;
  undefined3 extraout_var;
  int iVar3;
  undefined4 *puVar4;
  uint *local_302c;
  char local_3028 [20];
  DWORD local_3014;
  HMODULE local_3010;
  undefined1 local_300c;
  undefined4 local_300b;
  undefined1 local_200c;
  undefined4 local_200b;
  undefined4 local_100c;
  undefined4 *local_1008;
  undefined1 local_1004;
  undefined4 local_1003;
  undefined4 uStackY_24;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  
  FUN_10008bb0();
  local_300c = 0;
  puVar4 = &local_300b;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_200c = '\0';
  puVar4 = &local_200b;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_1004 = 0;
  puVar4 = &local_1003;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_1008 = (undefined4 *)&stack0x00000018;
  if ((param_1 < 0) || (2 < param_1)) {
    local_100c = 0xffffffff;
  }
  else if ((param_1 == 2) && (LVar2 = InterlockedIncrement((LONG *)&DAT_1002fcb8), 0 < LVar2)) {
    if ((DAT_10031430 == (FARPROC)0x0) &&
       ((local_3010 = LoadLibraryA("user32.dll"), local_3010 == (HMODULE)0x0 ||
        (DAT_10031430 = GetProcAddress(local_3010,"wsprintfA"), DAT_10031430 == (FARPROC)0x0)))) {
      local_100c = 0xffffffff;
    }
    else {
      (*DAT_10031430)();
      OutputDebugStringA(&local_200c);
      InterlockedDecrement((LONG *)&DAT_1002fcb8);
      FUN_10002f40();
      local_100c = 0xffffffff;
    }
  }
  else {
    if ((param_5 != (byte *)0x0) &&
       (iVar3 = FUN_10008ab0(&local_1004,0xfed,param_5,local_1008), iVar3 < 0)) {
      FUN_10001ec0((uint *)&local_1004,(uint *)"_CrtDbgReport: String too long or IO Error");
    }
    if (param_1 == 2) {
      if (param_5 == (byte *)0x0) {
        local_302c = (uint *)0x1002c1f4;
      }
      else {
        local_302c = (uint *)0x1002c208;
      }
      FUN_10001ec0((uint *)&local_300c,local_302c);
    }
    FUN_10001ed0((uint *)&local_300c,(uint *)&local_1004);
    if (param_1 == 2) {
      if ((uRam1002fcc4 & 1) != 0) {
        FUN_10001ed0((uint *)&local_300c,(uint *)&DAT_1002c1f0);
      }
      FUN_10001ed0((uint *)&local_300c,(uint *)&DAT_1002c1ec);
    }
    if (param_2 == 0) {
      FUN_10001ec0((uint *)&local_200c,(uint *)&local_300c);
    }
    else {
      uStackY_24 = 0x10003265;
      iVar3 = FUN_100089b0(&local_200c,0x1000,(byte *)"%s(%d) : %s");
      if (iVar3 < 0) {
        FUN_10001ec0((uint *)&local_200c,(uint *)"_CrtDbgReport: String too long or IO Error");
      }
    }
    if ((DAT_10031c0c == (code *)0x0) || (iVar3 = (*DAT_10031c0c)(), iVar3 == 0)) {
      if (((*(uint *)(&DAT_1002fcbc + param_1 * 4) & 1) != 0) &&
         (*(int *)(&DAT_1002fcc8 + param_1 * 4) != -1)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_3014;
        nNumberOfBytesToWrite = _strlen(&local_200c);
        WriteFile(*(HANDLE *)(&DAT_1002fcc8 + param_1 * 4),&local_200c,nNumberOfBytesToWrite,
                  lpNumberOfBytesWritten,lpOverlapped);
      }
      if ((*(uint *)(&DAT_1002fcbc + param_1 * 4) & 2) != 0) {
        OutputDebugStringA(&local_200c);
      }
      if ((*(uint *)(&DAT_1002fcbc + param_1 * 4) & 4) == 0) {
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1002fcb8);
        }
        local_100c = 0;
      }
      else {
        if (param_3 != 0) {
          __itoa(param_3,local_3028,10);
        }
        bVar1 = FUN_100033e0();
        local_100c = CONCAT31(extraout_var,bVar1);
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1002fcb8);
        }
      }
    }
    else if (param_1 == 2) {
      InterlockedDecrement((LONG *)&DAT_1002fcb8);
    }
  }
  return local_100c;
}


