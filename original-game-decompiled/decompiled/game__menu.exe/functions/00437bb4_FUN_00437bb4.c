
/* ==== FUN_00437bb4 @ 00437bb4 ==== 
 * signature: undefined __register FUN_00437bb4(int param_1, int * param_2)
 * body: 00437bb4-00437e09
 */

void FUN_00437bb4(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  pcStack_24 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcVar1 = (code *)&stack0xfffffffc;
  if (param_2 == (int *)0x0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab76c,(int *)&local_8);
    FUN_00405808((undefined4 *)PTR_PTR_004ab65c,(int *)&local_c);
    FUN_00403ee4((int *)&local_8,local_c);
    piVar2 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',local_8);
    FUN_004036f4(piVar2);
    pcVar1 = pcStack_24;
  }
  pcStack_24 = pcVar1;
  if (param_2[1] == 0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab76c,(int *)&local_10);
    FUN_00405808((undefined4 *)PTR_PTR_004ab910,(int *)&local_14);
    FUN_00403ee4((int *)&local_10,local_14);
    piVar2 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',local_10);
    FUN_004036f4(piVar2);
  }
  iVar3 = FUN_00436508(param_2[5]);
  if (iVar3 == 1) {
    iVar3 = *(int *)(param_1 + 100);
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined1 *)(iVar3 + 0x10) = 0;
  }
  else if (iVar3 == 2) {
    piVar2 = (int *)param_2[6];
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)param_2[3];
    }
    if (piVar2[1] == 0) {
      if (param_2[5] == *(int *)(param_1 + 100)) {
        piVar2[8] = *(int *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(int *)(param_1 + 100) + 0x20);
        FUN_00402f9c(*(int **)(param_1 + 100));
        *(int **)(param_1 + 100) = piVar2;
        piVar2[3] = 0;
        piVar2[6] = 0;
        piVar2[5] = 0;
        FUN_0043833c(param_1);
      }
      else {
        iVar3 = *(int *)(param_2[5] + 0x18);
        *(int *)(piVar2[2] + 0x18) = iVar3;
        if (iVar3 == 0) {
          *(int *)(*(int *)(param_2[5] + 0x14) + 8) = piVar2[2];
        }
        else {
          *(int *)(iVar3 + 0xc) = piVar2[2];
        }
        iVar3 = piVar2[2];
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_2[5] + 0x14);
        do {
          iVar3 = *(int *)(iVar3 + 0xc);
          *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_2[5] + 0x14);
        } while (*(int *)(iVar3 + 0xc) != 0);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_2[5] + 0xc);
        if (*(int *)(iVar3 + 0xc) != 0) {
          *(int *)(*(int *)(iVar3 + 0xc) + 0x18) = iVar3;
        }
        FUN_00436c30(param_1,*(int *)(iVar3 + 0x14),extraout_ECX);
        FUN_00402f9c((int *)param_2[5]);
        FUN_00402f9c(piVar2);
      }
    }
    else {
      iVar3 = param_2[5];
      if (*(int *)(param_1 + 100) == iVar3) {
        *(int **)(*(int *)(param_1 + 100) + 8) = piVar2;
        piVar2[6] = 0;
        piVar2[3] = 0;
        iVar3 = FUN_00436564(*(int *)(param_1 + 100));
        piVar2[8] = iVar3;
        FUN_00436840((int)piVar2);
        uVar4 = extraout_ECX_00;
      }
      else {
        *(undefined1 *)(iVar3 + 0x10) = 0;
        *(int *)(iVar3 + 4) = piVar2[1];
        *(undefined4 *)(iVar3 + 8) = 0;
        FUN_00402f9c(piVar2);
        uVar4 = extraout_ECX_01;
      }
      FUN_00436c30(param_1,param_2[5],uVar4);
    }
  }
  else {
    iVar3 = param_2[6];
    if (iVar3 == 0) {
      *(int *)(param_2[5] + 8) = param_2[3];
      iVar3 = param_2[3];
      *(undefined4 *)(iVar3 + 0x18) = 0;
      FUN_00436840(iVar3);
      uVar4 = extraout_ECX_02;
    }
    else {
      *(int *)(iVar3 + 0xc) = param_2[3];
      if (param_2[3] != 0) {
        *(int *)(param_2[3] + 0x18) = iVar3;
      }
      iVar3 = param_2[6];
      *(int *)(iVar3 + 0x20) = param_2[8];
      FUN_00436840(iVar3);
      uVar4 = extraout_ECX_03;
    }
    FUN_00436c30(param_1,param_2[5],uVar4);
  }
  FUN_00402f9c(param_2);
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_00437e11;
  pcStack_28 = (code *)0x437e09;
  FUN_00403c80((int *)&local_14,4);
  return;
}


