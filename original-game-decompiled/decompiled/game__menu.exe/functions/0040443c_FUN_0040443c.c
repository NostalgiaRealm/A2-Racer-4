
/* ==== FUN_0040443c @ 0040443c ==== 
 * signature: undefined __register FUN_0040443c(int * param_1, UINT param_2)
 * body: 0040443c-0040447c
 */

void FUN_0040443c(int *param_1,UINT param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (0 < (int)param_2) {
    puVar2 = (undefined4 *)FUN_00404424(param_2);
    uVar1 = FUN_00404418(*param_1);
    if (0 < (int)uVar1) {
      if ((int)param_2 < (int)uVar1) {
        uVar1 = param_2;
      }
      FUN_004028d8((undefined4 *)*param_1,puVar2,uVar1 * 2);
    }
  }
  FUN_004042a4(param_1,puVar2);
  return;
}


