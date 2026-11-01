
/* ==== FUN_00410fec @ 00410fec ==== 
 * signature: undefined __register FUN_00410fec(int * param_1, int * param_2)
 * body: 00410fec-004110e8;004110fe-00411104
 */

void FUN_00410fec(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = (undefined1 *)0x411009;
  FUN_00403cb0(param_2,(undefined4 *)param_1[5]);
  puStack_24 = (undefined1 *)0x411015;
  piVar2 = (int *)FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  if ((*param_2 == 0) && (piVar2 != (int *)0x0)) {
    puStack_24 = (undefined1 *)0x411038;
    iVar3 = FUN_004031bc(*piVar2);
    if (iVar3 != 0) {
      puStack_24 = (undefined1 *)0x41104a;
      iVar3 = FUN_004031bc(*piVar2);
      puStack_24 = (undefined1 *)0x41104f;
      iVar3 = FUN_0040de54(iVar3);
      if ((iVar3 != 0) && (*(short *)(iVar3 + 8) != 0)) {
        puStack_24 = (undefined1 *)0x411070;
        puVar4 = (undefined4 *)FUN_0040277c((int)*(short *)(iVar3 + 8) << 2);
        pcStack_28 = thunk_FUN_004036bc;
        uStack_2c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_2c;
        puStack_24 = &stack0xfffffffc;
        iVar5 = FUN_004031bc(*piVar2);
        FUN_0040df2c(iVar5,puVar4);
        iVar3 = (int)*(short *)(iVar3 + 8);
        if (-1 < iVar3 + -1) {
          iVar5 = 0;
          do {
            puVar1 = (undefined4 *)puVar4[iVar5];
            if (**(char **)*puVar1 == '\a') {
              piVar6 = (int *)FUN_0040df80(piVar2,(undefined4 *)puVar4[iVar5]);
              if (piVar6 == param_1) {
                FUN_00403e80(param_1 + 5,(byte *)((int)puVar1 + 0x1a));
              }
            }
            iVar5 = iVar5 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        *in_FS_OFFSET = uStack_2c;
        puStack_24 = &DAT_004110f0;
        pcStack_28 = (code *)0x4110e8;
        FUN_00402794((int)puVar4);
        return;
      }
    }
  }
  return;
}


