
/* ==== FUN_00403ad4 @ 00403ad4 ==== 
 * signature: bool __register FUN_00403ad4(void)
 * body: 00403ad4-00403b06
 */

bool FUN_00403ad4(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = DAT_004ac4a4;
  puVar4 = &DAT_004ac4a4;
  for (iVar2 = 0xb; iVar1 = DAT_004ac038, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  LOCK();
  DAT_004ac038 = 0;
  UNLOCK();
  return (bool)('\x01' - (iVar1 != 0));
}


