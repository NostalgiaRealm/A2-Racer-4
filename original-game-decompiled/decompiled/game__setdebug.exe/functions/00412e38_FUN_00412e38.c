
/* ==== FUN_00412e38 @ 00412e38 ==== 
 * signature: undefined __register FUN_00412e38(undefined4 * param_1, int * param_2)
 * body: 00412e38-00412e96
 */

void FUN_00412e38(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  iVar2 = 0;
  FUN_004039b8(param_2);
  if (DAT_00447614 != (code *)0x0) {
    FUN_00403a0c(param_2,param_1);
    while( true ) {
      iVar1 = (*DAT_00447614)(*param_2);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      local_10 = 0xb;
      local_8 = 0;
      local_14 = param_1;
      local_c = iVar2;
      FUN_0040873c((byte *)"%s_%d",&local_14,1,param_2);
    }
  }
  return;
}


