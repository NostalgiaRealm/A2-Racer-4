
/* ==== FUN_00402378 @ 00402378 ==== 
 * signature: undefined __stdcall FUN_00402378(void)
 * body: 00402378-00402430
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402378(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_0040946c == 0) {
    FUN_0040363b();
  }
  iVar5 = 0;
  for (puVar6 = DAT_00407f90; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_00407f6c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_00407f90;
  puVar6 = DAT_00407f90;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_00403690((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_00403657(DAT_00407f90);
  DAT_00407f90 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_00409468 = 1;
  return;
}


