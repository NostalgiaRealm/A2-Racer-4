
/* ==== FUN_0040a4dc @ 0040a4dc ==== 
 * signature: undefined __register FUN_0040a4dc(undefined4 * param_1, int * param_2)
 * body: 0040a4dc-0040a69d
 */

void FUN_0040a4dc(undefined4 *param_1,int *param_2)

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
  pcStack_28 = thunk_FUN_00403434;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar6 = 1;
  FUN_004039b8(param_2);
  ppbVar7 = &local_8;
  LVar3 = GetThreadLocale();
  FUN_0040a1a4(LVar3,0x1009,(undefined4 *)&DAT_0040a6b4,(int *)ppbVar7);
  iVar4 = FUN_00407cdc(local_8,1,extraout_ECX);
  if (iVar4 - 3U < 3) {
    while (iVar4 = FUN_00403c38((int)param_1), iVar6 <= iVar4) {
      uVar5 = (uint)*(byte *)((int)param_1 + iVar6 + -1);
      if (((byte)(&DAT_00446108)[(int)uVar5 >> 3] >> (uVar5 & 7) & 1) == 0) {
        iVar4 = FUN_0040814c((char *)((int)param_1 + iVar6 + -1),"gg",2);
        if (iVar4 == 0) {
          FUN_00403c40(param_2,(undefined4 *)&DAT_0040a6c4);
          iVar6 = iVar6 + 1;
        }
        else {
          iVar4 = FUN_0040814c((char *)((int)param_1 + iVar6 + -1),"yyyy",4);
          if (iVar4 == 0) {
            FUN_00403c40(param_2,(undefined4 *)&DAT_0040a6d8);
            iVar6 = iVar6 + 3;
          }
          else {
            iVar4 = FUN_0040814c((char *)((int)param_1 + iVar6 + -1),"yy",2);
            if (iVar4 == 0) {
              FUN_00403c40(param_2,(undefined4 *)&DAT_0040a6ec);
              iVar6 = iVar6 + 1;
            }
            else {
              cVar1 = *(char *)((int)param_1 + iVar6 + -1);
              if ((cVar1 == 'Y') || (cVar1 == 'y')) {
                FUN_00403c40(param_2,(undefined4 *)FUN_0040a6f8);
              }
              else {
                FUN_00403b60((int *)&local_14,
                             CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                      *(undefined1 *)((int)param_1 + iVar6 + -1)));
                FUN_00403c40(param_2,local_14);
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
      }
      else {
        FUN_00403e40((int)param_1,iVar6,2,(int *)&local_10);
        FUN_00403c40(param_2,local_10);
        iVar6 = iVar6 + 2;
      }
    }
  }
  else {
    if ((DAT_004475b0 == 4) || ((ushort)(DAT_004475b0 - 0x11U) < 2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      for (; iVar4 = FUN_00403c38((int)param_1), iVar6 <= iVar4; iVar6 = iVar6 + 1) {
        cVar1 = *(char *)((int)param_1 + iVar6 + -1);
        if ((cVar1 != 'G') && (cVar1 != 'g')) {
          FUN_00403b60((int *)&local_c,
                       CONCAT31((int3)((uint)extraout_EDX >> 8),
                                *(undefined1 *)((int)param_1 + iVar6 + -1)));
          FUN_00403c40(param_2,local_c);
        }
      }
    }
    else {
      FUN_00403a0c(param_2,param_1);
    }
  }
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0040a6a5;
  pcStack_28 = (code *)0x40a69d;
  FUN_004039dc((int *)&local_14,4);
  return;
}


