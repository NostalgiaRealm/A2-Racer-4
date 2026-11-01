
/* ==== TWinControlWrapper.vmt_088 @ 00465838 ==== 
 * signature: undefined TWinControlWrapper.vmt_088(void)
 * body: 00465838-004659ce
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlWrapper_vmt_088(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(short *)(param_1 + 0x132) != 0) {
    (**(code **)(param_1 + 0x130))(*(undefined4 *)(param_1 + 0x134),param_2);
  }
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    iVar1 = *param_2;
    if (iVar1 < 0x101) {
      if (iVar1 == 0x100) {
        iVar1 = FUN_0042f720(param_1,0x100,param_2[1],param_2[2]);
        param_2[3] = iVar1;
      }
      else if (iVar1 < 8) {
        if (iVar1 == 7) {
          iVar1 = FUN_0042f720(param_1,7,param_2[1],param_2[2]);
          param_2[3] = iVar1;
        }
        else if (iVar1 == 2) {
          iVar1 = FUN_004656b4(param_1);
          *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x130);
          *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x134);
          *(undefined4 *)(param_1 + 0x128) = 0;
          *(undefined4 *)(param_1 + 0x130) = 0;
          *(undefined4 *)(param_1 + 0x134) = 0;
        }
        else if (iVar1 == 5) {
          uVar4 = 0;
          uVar3 = 0;
          piVar2 = (int *)FUN_004656b4(param_1);
          (**(code **)(*piVar2 + 0x7c))(piVar2,0,0,uVar3,uVar4);
        }
      }
      else if (iVar1 == 8) {
        iVar1 = FUN_0042f720(param_1,8,param_2[1],param_2[2]);
        param_2[3] = iVar1;
      }
      else if (iVar1 == 0x87) {
        iVar1 = FUN_0042f720(param_1,0x87,param_2[1],param_2[2]);
        param_2[3] = iVar1;
      }
    }
    else if (iVar1 == 0x101) {
      iVar1 = FUN_0042f720(param_1,0x101,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
    else if (iVar1 == 0x102) {
      iVar1 = FUN_0042f720(param_1,0x102,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
    else if (iVar1 == 0xb01a) {
      iVar1 = FUN_0042f720(param_1,0xb01a,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
    else if (iVar1 == 0xb01b) {
      iVar1 = FUN_0042f720(param_1,0xb01b,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
  }
  return;
}


