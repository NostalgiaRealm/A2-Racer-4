
/* ==== FUN_004149ec @ 004149ec ==== 
 * signature: undefined __register FUN_004149ec(undefined4 * param_1, int * param_2)
 * body: 004149ec-00414a4a
 */

void FUN_004149ec(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  iVar2 = 0;
  FUN_00403c5c(param_2);
  if (DAT_004ac61c != (code *)0x0) {
    FUN_00403cb0(param_2,param_1);
    while( true ) {
      iVar1 = (*DAT_004ac61c)(*param_2);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      local_10 = 0xb;
      local_8 = 0;
      local_14 = param_1;
      local_c = iVar2;
      FUN_00409254((byte *)"%s_%d",&local_14,1,param_2);
    }
  }
  return;
}


