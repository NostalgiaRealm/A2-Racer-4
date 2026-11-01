
/* ==== __break @ 0051034a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0051034a-0051034a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


