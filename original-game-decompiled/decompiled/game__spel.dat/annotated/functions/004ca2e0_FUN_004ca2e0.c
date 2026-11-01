
/* ==== FUN_004ca2e0 @ 004ca2e0 ==== 
 * signature: undefined __cdecl FUN_004ca2e0(int param_1, int param_2, int param_3, byte * param_4)
 * body: 004ca2e0-004ca3c2
 */

void __cdecl FUN_004ca2e0(int param_1,int param_2,int param_3,byte *param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  bVar2 = *param_4;
  DAT_00740a00 = param_3;
  DAT_007409fc = param_2;
  do {
    if (bVar2 == 0) {
      DAT_007409fc = param_2;
      return;
    }
    uVar4 = (uint)bVar2;
    iVar5 = DAT_007409fc;
    if ((int)uVar4 < *(int *)(DAT_00740a18 + 100)) {
      piVar1 = (int *)(*(int *)(DAT_00740a18 + 0x68) + uVar4 * 0xc);
      iVar5 = *piVar1;
      iVar3 = *(int *)(iVar5 + 4);
      if (uVar4 == 9) {
        DAT_007409fc = DAT_007409fc + DAT_00740a10 + iVar3;
      }
      else if (uVar4 == 10) {
        iVar5 = DAT_00740a0c + DAT_00740a00 + *(int *)(iVar5 + 8);
        if (DAT_005b379c <= iVar5) {
          DAT_007409fc = param_2;
          return;
        }
        DAT_007409fc = 0;
        DAT_00740a00 = iVar5;
      }
      else {
        if (piVar1[2] == 1) {
          iVar5 = DAT_007409fc;
          DAT_007409fc = param_2;
          FUN_004c9560(param_1,uVar4,iVar5,DAT_00740a00);
        }
        DAT_007409fc = DAT_007409fc + DAT_00740a10 + iVar3;
      }
      iVar5 = DAT_007409fc;
      param_2 = DAT_007409fc;
      if (DAT_005b3798 < DAT_007409fc) {
        return;
      }
    }
    DAT_007409fc = param_2;
    param_4 = param_4 + 1;
    bVar2 = *param_4;
    param_2 = DAT_007409fc;
    DAT_007409fc = iVar5;
  } while( true );
}


