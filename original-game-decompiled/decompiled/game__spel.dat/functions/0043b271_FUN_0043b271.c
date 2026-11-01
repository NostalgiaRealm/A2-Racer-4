
/* ==== FUN_0043b271 @ 0043b271 ==== 
 * signature: undefined4 __stdcall FUN_0043b271(void)
 * body: 0043b271-0043b27f
 */

undefined4 FUN_0043b271(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  if (((DAT_006fcdf0 != 0) &&
      (iVar3 = DAT_006fba58 * 0xf0 + DAT_00715e50, *(int *)(iVar3 + 0x38) < *(int *)(iVar3 + 0x34)))
     && (DAT_006fcdfc = DAT_006fcdfc + 1, DAT_006fcdfc == DAT_006fcdf8)) {
    DAT_006fce00 = DAT_006fce00 + 5;
    DAT_006fce04 = DAT_006fce04 + 2;
    DAT_006fce08 = DAT_006fce08 - 5;
    DAT_0073b4d8 = (DAT_006fce00 * 0x100 | DAT_006fce04) << 8 | DAT_006fce08;
    if (DAT_0073b4d4 != 0) {
      iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x22,DAT_0073b4d8);
      if (iVar3 != 0) {
        FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
      }
      uVar4 = DAT_0073b4d8 & 0xff;
      fVar5 = (float)((int)DAT_0073b4d8 >> 0x10) * 0.003921569;
      fVar1 = (float)((int)DAT_0073b4d8 >> 8 & 0xff) * 0.003921569;
      iVar3 = *(int *)(DAT_0073b210 + DAT_005b1bac * 4);
      *(float *)(iVar3 + 0x14) = fVar5;
      *(undefined4 *)(iVar3 + 0x58) = 1;
      *(float *)(iVar3 + 0x18) = fVar1;
      fVar2 = (float)uVar4 * 0.003921569;
      *(float *)(iVar3 + 0x1c) = fVar2;
      if (*(int *)(iVar3 + 0x5c) == 1) {
        *(undefined4 *)(iVar3 + 0x58) = 0;
        (**(code **)(**(int **)(iVar3 + 0x54) + 0xc))(*(int **)(iVar3 + 0x54),iVar3);
      }
      *(float *)(iVar3 + 4) = fVar5;
      *(undefined4 *)(iVar3 + 0x58) = 1;
      *(float *)(iVar3 + 8) = fVar1;
      *(float *)(iVar3 + 0xc) = fVar2;
      if (*(int *)(iVar3 + 0x5c) == 1) {
        *(undefined4 *)(iVar3 + 0x58) = 0;
        (**(code **)(**(int **)(iVar3 + 0x54) + 0xc))(*(int **)(iVar3 + 0x54),iVar3);
      }
    }
    DAT_006fcdfc = 0;
  }
  return 0;
}


