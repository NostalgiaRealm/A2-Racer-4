
/* ==== __break @ 0051034d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0051034d-0051034d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


