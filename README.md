# 42 Minitalk Projesi

Bu repository, 42 okulu tarafından sunulan Piscine eğitimi sırasında tamamladığım "minitalk" projesini içerir. "Minitalk", iki işlem arasında iletişim kurmak için kullanılan bir C programıdır.

## Proje Açıklaması

"Minitalk" projesi, iki ayrı işlem arasında sinyal yoluyla iletişim kurmayı amaçlar. Bu iletişim, bir işlem tarafından gönderilen sinyalleri diğer işlem tarafından alarak veri iletmeyi sağlar. Bu proje, işlem iletişimi ve sinyal yönetimi konularında becerilerinizi geliştirmenize yardımcı olur.

Projede iki ana bileşen bulunmaktadır:

1. **Server (Sunucu)**: Sunucu işlemi, sinyalleri alır ve bu sinyalleri işler. Alınan sinyalleri kullanarak iletişim sağlar.

2. **Client (İstemci)**: İstemci işlemi, sunucuya veri göndermek için sinyalleri kullanır. İstemci, sunucu ile iletişim kurarak veri iletebilir.

## Kullanım

Projenin kullanımı için aşağıdaki adımları takip edebilirsiniz:

1. "Server" işlemi başlatın: Sunucu işlemi, sinyalleri almak ve veriyi işlemek için kullanılacaktır.

2. "Client" işlemi başlatın: İstemci işlemi, sunucuya veri göndermek için kullanılır. İstemci işlemi, sunucu işlemine veri göndermek için sinyaller kullanacaktır.

3. Sunucu, istemciden gelen sinyalleri alacak ve iletişim kuracaktır.

Örnek kullanım için aşağıdaki adımları takip edebilirsiniz:

```c
# Terminal 1: Sunucu
./server
