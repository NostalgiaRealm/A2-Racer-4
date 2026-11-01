
/* ==== FUN_00403830 @ 00403830 ==== 
 * signature: bool __register FUN_00403830(void)
 * body: 00403830-00403862
 */

bool FUN_00403830(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = DAT_0044749c;
  puVar4 = &DAT_0044749c;
  for (iVar2 = 0xb; iVar1 = DAT_00447030, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  LOCK();
  DAT_00447030 = 0;
  UNLOCK();
  return (bool)('\x01' - (iVar1 != 0));
}


