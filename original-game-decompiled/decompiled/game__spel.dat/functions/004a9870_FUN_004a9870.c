
/* ==== FUN_004a9870 @ 004a9870 ==== 
 * signature: undefined __cdecl FUN_004a9870(int param_1, int param_2)
 * body: 004a9870-004a990c;004a9916-004a9998
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a990d-004a9915
 */

void __cdecl FUN_004a9870(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  iVar5 = -1;
  if (0 < DAT_00715e54) {
    do {
      if (*(char *)(DAT_00715e60 + iVar3) == '\x01') {
        iVar5 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00715e54);
  }
  iVar3 = FUN_004af5a0(param_1,param_2,&param_2,&param_1,&local_8,&local_4);
  iVar6 = 0;
  if (-1 < iVar5) {
    iVar7 = 0;
    iVar4 = DAT_00715e50;
    do {
      if (*(int *)(iVar7 + 0x5c + iVar4) != 0) {
        if ((iVar7 < 0) || (DAT_00715e54 <= iVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
        }
        if (*(char *)(DAT_00715e60 + iVar6) != '\0') {
          iVar1 = *(int *)(iVar7 + 0x34 + iVar4);
          if ((((param_2 <= iVar1) && (iVar1 <= param_1)) || (*(int *)(iVar7 + 0x68 + iVar4) != 0))
             && (pcVar2 = *(code **)(iVar7 + 0x6c + iVar4), pcVar2 != (code *)0x0)) {
            (*pcVar2)(iVar6);
            iVar4 = DAT_00715e50;
          }
          if (((iVar3 != 0) && (*(int *)(iVar7 + 0x68 + iVar4) == 0)) &&
             ((iVar1 = *(int *)(iVar7 + 0x34 + iVar4), local_8 <= iVar1 &&
              ((iVar1 <= local_4 &&
               (pcVar2 = *(code **)(iVar7 + 0x6c + iVar4), pcVar2 != (code *)0x0)))))) {
            (*pcVar2)(iVar6);
            iVar4 = DAT_00715e50;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0xf0;
    } while (iVar6 <= iVar5);
  }
  return;
}


