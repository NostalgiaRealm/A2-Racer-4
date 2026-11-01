
/* ==== FUN_0040818c @ 0040818c ==== 
 * signature: undefined FUN_0040818c(void)
 * body: 0040818c-004081b5
 */

void FUN_0040818c(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_004aa140;
  puVar1 = DAT_004aa140 + 1;
  DAT_004aa140 = (undefined4 *)*DAT_004aa140;
  *(undefined4 *)PTR_DAT_004ab61c = *puVar1;
  pcVar2 = (code *)puVar3[2];
  FUN_00402794((int)puVar3);
  (*pcVar2)();
  return;
}


