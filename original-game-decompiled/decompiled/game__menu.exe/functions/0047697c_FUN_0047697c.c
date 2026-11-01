
/* ==== FUN_0047697c @ 0047697c ==== 
 * signature: undefined __register FUN_0047697c(void)
 * body: 0047697c-00476995
 */

void FUN_0047697c(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '-';
  puVar2 = &DAT_004ad1f8;
  do {
    FUN_00402f9c((int *)*puVar2);
    puVar2 = puVar2 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}


