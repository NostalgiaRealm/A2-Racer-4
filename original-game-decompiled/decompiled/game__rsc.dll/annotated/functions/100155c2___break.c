
/* ==== __break @ 100155c2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 100155c2-100155c2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


