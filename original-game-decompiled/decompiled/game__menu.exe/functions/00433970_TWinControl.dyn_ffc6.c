
/* ==== TWinControl.dyn_ffc6 @ 00433970 ==== 
 * signature: undefined TWinControl.dyn_ffc6(void)
 * body: 00433970-00433a32
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

char TWinControl_dyn_ffc6(int *param_1,undefined1 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int3 iVar3;
  int iVar4;
  char cStack_11;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined1 uStack_5;
  
  uStack_10 = *param_4;
  uStack_c = param_4[1];
  cStack_11 = '\0';
  uStack_5 = param_2;
  if (*(short *)((int)param_1 + 0x1ca) != 0) {
    (*(code *)param_1[0x72])(param_1[0x73],param_1,param_2,&cStack_11,&uStack_10,param_3);
  }
  if (cStack_11 == '\0') {
    param_1[0x5e] = param_1[0x5e] + param_3;
    while( true ) {
      uVar2 = param_1[0x5e];
      if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 0x78) break;
      uVar1 = param_1[0x5e];
      iVar4 = ((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) + -0x78;
      param_1[0x5e] = iVar4;
      iVar3 = (int3)((int)uVar1 >> 0x1f);
      if ((int)uVar2 < 0) {
        if (iVar4 != 0) {
          param_1[0x5e] = -iVar4;
        }
        cStack_11 = FUN_00403178(param_1,CONCAT31(iVar3,uStack_5),&uStack_10);
      }
      else {
        cStack_11 = FUN_00403178(param_1,CONCAT31(iVar3,uStack_5),&uStack_10);
      }
    }
  }
  return cStack_11;
}


