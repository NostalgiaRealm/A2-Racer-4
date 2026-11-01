
/* ==== FUN_00561473 @ 00561473 ==== 
 * signature: undefined __stdcall FUN_00561473(void)
 * body: 00561473-0056152b
 */

void FUN_00561473(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_007503d4 == 0) {
    FUN_00561160();
  }
  iVar5 = 0;
  for (puVar6 = DAT_0074dc50; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_0074dc88 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_0074dc50;
  puVar6 = DAT_0074dc50;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_0055ee40((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_00559d4e(DAT_0074dc50);
  DAT_0074dc50 = (uint *)0x0;
  *puVar3 = 0;
  DAT_007503d0 = 1;
  return;
}


