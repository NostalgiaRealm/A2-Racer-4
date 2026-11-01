
/* ==== TWinControl.vmt_090 @ 00431918 ==== 
 * signature: undefined __register TWinControl.vmt_090(int * param_1, int * param_2)
 * body: 00431918-00431a35
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_090(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  HCURSOR pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  code *pcStack_11c;
  code *pcStack_118;
  byte local_108 [256];
  undefined *local_8;
  
  pcStack_118 = (code *)&stack0xfffffffc;
  local_8 = (undefined *)0x0;
  pcStack_11c = thunk_FUN_004036bc;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402c30(param_2,0x8c,0);
  *param_2 = param_1[0x15];
  param_2[1] = 0x44000000;
  FUN_004318b0(param_1,(uint *)(param_2 + 2));
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2[1] = param_2[1] | 0x2000000;
    param_2[2] = param_2[2] | 0x10000;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 == '\0') {
      param_2[1] = param_2[1] | 0x8000000;
    }
  }
  if ((char)param_1[0x5d] != '\0') {
    param_2[1] = param_2[1] | 0x10000;
  }
  param_2[3] = param_1[0xc];
  param_2[4] = param_1[0xd];
  param_2[5] = param_1[0xe];
  param_2[6] = param_1[0xf];
  if ((int *)param_1[9] == (int *)0x0) {
    param_2[7] = param_1[0x59];
  }
  else {
    iVar2 = FUN_004349e0((int *)param_1[9]);
    param_2[7] = iVar2;
  }
  param_2[9] = 0xb;
  param_2[10] = (int)DefWindowProcA;
  pHVar3 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  param_2[0xf] = (int)pHVar3;
  param_2[0x10] = 0;
  param_2[0xd] = DAT_004ac4dc;
  FUN_00402ee4(*param_1,local_108);
  FUN_00403e80((int *)&local_8,local_108);
  FUN_00408be8((char *)(param_2 + 0x13),local_8);
  *in_FS_OFFSET = uStack_120;
  pcStack_118 = FUN_00431a3d;
  pcStack_11c = (code *)0x431a35;
  FUN_00403c5c((int *)&local_8);
  return;
}


