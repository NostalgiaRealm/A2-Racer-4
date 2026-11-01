
/* ==== FUN_0055a7cf @ 0055a7cf ==== 
 * signature: undefined4 __stdcall FUN_0055a7cf(void)
 * body: 0055a7cf-0055a88c
 */

undefined4 FUN_0055a7cf(void)

{
  DWORD nLength;
  BOOL BVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  short *psVar5;
  DWORD local_c;
  DWORD local_8;
  
  if (DAT_005c8210 == -1) {
    if (DAT_005c8bd8 == (HANDLE)0xfffffffe) {
      FUN_0056310f();
    }
    if (DAT_005c8bd8 != (HANDLE)0xffffffff) {
      psVar5 = (short *)&stack0xffffffec;
      BVar1 = GetNumberOfConsoleInputEvents(DAT_005c8bd8,&local_c);
      nLength = local_c;
      if ((BVar1 != 0) && (local_c != 0)) {
        FUN_00559400();
        if (&stack0x00000000 != &DAT_00000014) {
          BVar1 = PeekConsoleInputA(DAT_005c8bd8,(PINPUT_RECORD)&stack0xffffffec,nLength,&local_8);
          if ((((BVar1 != 0) && (local_8 != 0)) && (local_8 <= local_c)) && (local_8 != 0)) {
            piVar4 = (int *)&stack0xfffffff0;
            do {
              if ((*psVar5 == 1) && (*piVar4 != 0)) {
                if (*(char *)((int)piVar4 + 10) != '\0') goto LAB_0055a888;
                pcVar2 = FUN_0055a88d((int)piVar4);
                if (pcVar2 != (char *)0x0) goto LAB_0055a888;
              }
              local_8 = local_8 - 1;
              psVar5 = psVar5 + 10;
              piVar4 = piVar4 + 5;
            } while (local_8 != 0);
          }
        }
      }
    }
    uVar3 = 0;
  }
  else {
LAB_0055a888:
    uVar3 = 1;
  }
  return uVar3;
}


