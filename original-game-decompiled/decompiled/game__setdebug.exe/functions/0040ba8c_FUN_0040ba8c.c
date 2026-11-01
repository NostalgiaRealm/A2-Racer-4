
/* ==== FUN_0040ba8c @ 0040ba8c ==== 
 * signature: undefined __register FUN_0040ba8c(void)
 * body: 0040ba8c-0040baa5
 */

void FUN_0040ba8c(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '\x01';
  for (puVar2 = DAT_004462e4; (cVar1 != '\0' && (puVar2 != (undefined4 *)0x0));
      puVar2 = (undefined4 *)*puVar2) {
    cVar1 = (*(code *)puVar2[1])();
  }
  return;
}


