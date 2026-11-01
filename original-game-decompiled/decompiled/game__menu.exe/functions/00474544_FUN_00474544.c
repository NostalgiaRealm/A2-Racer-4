
/* ==== FUN_00474544 @ 00474544 ==== 
 * signature: int * __register FUN_00474544(int * param_1, char param_2, undefined4 param_3)
 * body: 00474544-004745d4
 */

int * FUN_00474544(int *param_1,char param_2,undefined4 param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00402f6c(param_1,'\0',param_3);
  piVar2 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX_00);
  param_1[1] = (int)piVar2;
  piVar2[3] = (int)param_1;
  piVar2[2] = (int)FUN_0047467c;
  param_1[7] = 0x8080;
  *(undefined1 *)(param_1 + 8) = 1;
  bVar1 = 0;
  do {
    param_1[bVar1 + 3] = -1;
    bVar1 = bVar1 + 1;
  } while (bVar1 != 4);
  if (DAT_004ab458 == (int *)0x0) {
    DAT_004ab458 = FUN_0047443c((int *)&DAT_004742a8,'\x01',extraout_ECX_01);
  }
  if (cVar3 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


