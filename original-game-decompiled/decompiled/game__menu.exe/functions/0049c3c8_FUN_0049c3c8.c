
/* ==== FUN_0049c3c8 @ 0049c3c8 ==== 
 * signature: undefined FUN_0049c3c8(void)
 * body: 0049c3c8-0049c409
 */

void FUN_0049c3c8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0049c3b4(param_1);
  cVar1 = FUN_0049c77c(param_1,uVar2);
  if (cVar1 != '\0') {
    uVar2 = FUN_0049c4c4(param_1);
    cVar1 = FUN_0049ca08(param_1,uVar2);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_0049c3fc;
    }
  }
  uVar2 = 0;
LAB_0049c3fc:
  (**(code **)(**(int **)(param_1 + 0x2f0) + 0x5c))(*(int **)(param_1 + 0x2f0),uVar2);
  return;
}


