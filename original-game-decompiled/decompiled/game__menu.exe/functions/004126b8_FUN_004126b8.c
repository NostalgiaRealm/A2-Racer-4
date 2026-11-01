
/* ==== FUN_004126b8 @ 004126b8 ==== 
 * signature: undefined __register FUN_004126b8(int * param_1, undefined4 param_2, int param_3)
 * body: 004126b8-004126ee
 */

void FUN_004126b8(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      piVar2 = FUN_0040b694((int *)&DAT_0040e6dc,'\x01',(undefined4 *)PTR_PTR_004ab99c);
      FUN_004036f4(piVar2);
    }
  }
  return;
}


