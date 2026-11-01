
/* ==== FUN_0040c77c @ 0040c77c ==== 
 * signature: undefined __register FUN_0040c77c(void)
 * body: 0040c77c-0040c795
 */

void FUN_0040c77c(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '\x01';
  for (puVar2 = DAT_004aa2f8; (cVar1 != '\0' && (puVar2 != (undefined4 *)0x0));
      puVar2 = (undefined4 *)*puVar2) {
    cVar1 = (*(code *)puVar2[1])();
  }
  return;
}


