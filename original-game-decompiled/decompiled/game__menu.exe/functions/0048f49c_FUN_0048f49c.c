
/* ==== FUN_0048f49c @ 0048f49c ==== 
 * signature: undefined __register FUN_0048f49c(void)
 * body: 0048f49c-0048f4b5
 */

void FUN_0048f49c(void)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = '\v';
  puVar2 = &DAT_004ad460;
  do {
    FUN_00402f9c((int *)*puVar2);
    puVar2 = puVar2 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}


