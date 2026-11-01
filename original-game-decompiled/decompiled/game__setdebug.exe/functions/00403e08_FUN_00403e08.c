
/* ==== FUN_00403e08 @ 00403e08 ==== 
 * signature: int __register FUN_00403e08(int * param_1)
 * body: 00403e08-00403e3c
 */

int FUN_00403e08(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((iVar3 != 0) && (*(int *)(iVar3 + -8) != 1)) {
    puVar2 = FUN_00403a7c(*(int *)(iVar3 + -4));
    puVar1 = (undefined4 *)*param_1;
    *param_1 = (int)puVar2;
    if (0 < (int)puVar1[-2]) {
      LOCK();
      puVar1[-2] = puVar1[-2] + -1;
      UNLOCK();
    }
    FUN_004027d0(puVar1,puVar2,puVar1[-1]);
    iVar3 = *param_1;
  }
  return iVar3;
}


