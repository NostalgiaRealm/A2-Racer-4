
/* ==== __break @ 0051034b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0051034b-0051034b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


