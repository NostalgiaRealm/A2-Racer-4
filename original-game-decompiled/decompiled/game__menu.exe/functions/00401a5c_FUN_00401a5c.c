
/* ==== FUN_00401a5c @ 00401a5c ==== 
 * signature: undefined __register FUN_00401a5c(int param_1, int param_2, int * param_3)
 * body: 00401a5c-00401ae7
 */

void FUN_00401a5c(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  LPVOID local_1c;
  int local_18;
  LPVOID local_14;
  int local_10;
  
  uVar1 = param_1 + 0x3fffU & 0xffffc000;
  uVar2 = param_2 + param_1 & 0xffffc000;
  if (uVar1 < uVar2) {
    FUN_00401828(uVar1,uVar2 - uVar1,param_3);
    FUN_004014fc(&DAT_004ac468,param_3,(int *)&local_1c);
    if (local_1c != (LPVOID)0x0) {
      FUN_004016dc(local_1c,local_18,&local_14);
      local_1c = local_14;
      local_18 = local_10;
    }
    if (local_1c != (LPVOID)0x0) {
      FUN_00401570(&DAT_004ac468,(uint *)&local_1c);
    }
  }
  else {
    *param_3 = 0;
  }
  return;
}


