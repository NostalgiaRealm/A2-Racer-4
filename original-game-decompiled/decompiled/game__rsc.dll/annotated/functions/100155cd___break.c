
/* ==== __break @ 100155cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 100155cd-100155cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


