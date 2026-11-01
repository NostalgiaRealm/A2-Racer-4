
/* ==== FUN_00418ee0 @ 00418ee0 ==== 
 * signature: undefined4 __cdecl FUN_00418ee0(int param_1, int param_2)
 * body: 00418ee0-00418fe0
 */

undefined4 __cdecl FUN_00418ee0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  float local_4;
  
  iVar1 = FUN_00422ae0(param_1,&DAT_005d2b48);
  if ((0 < iVar1) && (iVar3 = 0, 0 < iVar1)) {
    piVar4 = &DAT_005d2b48;
    iVar2 = DAT_00715e50;
    do {
      if (*piVar4 != param_2) {
        iVar2 = *(int *)(*piVar4 * 0xf0 + 0x24 + iVar2);
        lVar5 = FUN_00403ea0(param_2,*(float *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8),
                             *(undefined4 *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8 + 0x58),local_4);
        iVar2 = DAT_00715e50;
        if ((((int)lVar5 < 0x200) || (0xe00 < (int)lVar5)) &&
           (*(float *)(*piVar4 * 0xf0 + 0xc4 + DAT_00715e50) <
            *(float *)(param_2 * 0xf0 + 0xc4 + DAT_00715e50))) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


