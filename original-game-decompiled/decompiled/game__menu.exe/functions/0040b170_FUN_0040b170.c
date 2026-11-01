
/* ==== FUN_0040b170 @ 0040b170 ==== 
 * signature: undefined __register FUN_0040b170(undefined4 * param_1, int * param_2)
 * body: 0040b170-0040b331
 */

void FUN_0040b170(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  LCID LVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  byte **ppbVar7;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  byte *local_8;
  
  pcStack_24 = (code *)&stack0xfffffffc;
  local_8 = (byte *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar6 = 1;
  FUN_00403c5c(param_2);
  ppbVar7 = &local_8;
  LVar3 = GetThreadLocale();
  FUN_0040ae38(LVar3,0x1009,(undefined4 *)&DAT_0040b348,(int *)ppbVar7);
  iVar4 = FUN_00408654(local_8,1,extraout_ECX);
  if (iVar4 - 3U < 3) {
    while (iVar4 = FUN_00403edc((int)param_1), iVar6 <= iVar4) {
      uVar5 = (uint)*(byte *)((int)param_1 + iVar6 + -1);
      if (((byte)(&DAT_004aa118)[(int)uVar5 >> 3] >> (uVar5 & 7) & 1) == 0) {
        iVar4 = FUN_00408c50((char *)((int)param_1 + iVar6 + -1),"gg",2);
        if (iVar4 == 0) {
          FUN_00403ee4(param_2,(undefined4 *)&DAT_0040b358);
          iVar6 = iVar6 + 1;
        }
        else {
          iVar4 = FUN_00408c50((char *)((int)param_1 + iVar6 + -1),"yyyy",4);
          if (iVar4 == 0) {
            FUN_00403ee4(param_2,(undefined4 *)&DAT_0040b36c);
            iVar6 = iVar6 + 3;
          }
          else {
            iVar4 = FUN_00408c50((char *)((int)param_1 + iVar6 + -1),"yy",2);
            if (iVar4 == 0) {
              FUN_00403ee4(param_2,(undefined4 *)&DAT_0040b380);
              iVar6 = iVar6 + 1;
            }
            else {
              cVar1 = *(char *)((int)param_1 + iVar6 + -1);
              if ((cVar1 == 'Y') || (cVar1 == 'y')) {
                FUN_00403ee4(param_2,(undefined4 *)&DAT_0040b38c);
              }
              else {
                FUN_00403e04((int *)&local_14,
                             CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                      *(undefined1 *)((int)param_1 + iVar6 + -1)));
                FUN_00403ee4(param_2,local_14);
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
      }
      else {
        FUN_004040e4((int)param_1,iVar6,2,(int *)&local_10);
        FUN_00403ee4(param_2,local_10);
        iVar6 = iVar6 + 2;
      }
    }
  }
  else {
    if ((DAT_004ac5b8 == 4) || ((ushort)(DAT_004ac5b8 - 0x11U) < 2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      for (; iVar4 = FUN_00403edc((int)param_1), iVar6 <= iVar4; iVar6 = iVar6 + 1) {
        cVar1 = *(char *)((int)param_1 + iVar6 + -1);
        if ((cVar1 != 'G') && (cVar1 != 'g')) {
          FUN_00403e04((int *)&local_c,
                       CONCAT31((int3)((uint)extraout_EDX >> 8),
                                *(undefined1 *)((int)param_1 + iVar6 + -1)));
          FUN_00403ee4(param_2,local_c);
        }
      }
    }
    else {
      FUN_00403cb0(param_2,param_1);
    }
  }
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0040b339;
  pcStack_28 = (code *)0x40b331;
  FUN_00403c80((int *)&local_14,4);
  return;
}


