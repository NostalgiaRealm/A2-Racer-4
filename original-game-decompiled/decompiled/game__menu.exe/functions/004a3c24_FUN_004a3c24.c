
/* ==== FUN_004a3c24 @ 004a3c24 ==== 
 * signature: undefined __register FUN_004a3c24(int param_1, int * param_2)
 * body: 004a3c24-004a3c73
 */

void FUN_004a3c24(int param_1,int *param_2)

{
  BOOL BVar1;
  uint uVar2;
  int local_1008 [1024];
  
  local_1008[0] = param_1;
  BVar1 = mciGetErrorStringA(*(MCIERROR *)(param_1 + 0x2ec),(LPSTR)local_1008,0x1000);
  if (BVar1 == 0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab8bc,param_2);
  }
  else {
    uVar2 = FUN_00408b24((char *)local_1008);
    FUN_00403d44(param_2,local_1008,uVar2);
  }
  return;
}


