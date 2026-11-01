
/* ==== __break @ 100155cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 100155cc-100155cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


