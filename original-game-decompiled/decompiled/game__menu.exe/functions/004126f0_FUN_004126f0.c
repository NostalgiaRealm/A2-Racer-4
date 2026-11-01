
/* ==== FUN_004126f0 @ 004126f0 ==== 
 * signature: undefined __register FUN_004126f0(int * param_1, undefined4 param_2, int param_3)
 * body: 004126f0-00412726
 */

void FUN_004126f0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      piVar2 = FUN_0040b694((int *)&DAT_0040e734,'\x01',(undefined4 *)PTR_PTR_004ab82c);
      FUN_004036f4(piVar2);
    }
  }
  return;
}


