# Vimax Core

Vimax Core is an AI-first modular runtime that transforms natural language into safe, auditable workflows using pluggable domain engines.
***
Vimax Core — это ядро платформы, которое превращает естественную речь пользователя в безопасные, проверяемые сценарии выполнения с помощью подключаемых доменных модулей

Статус: `0.1.0-alpha`

## Главный принцип

Пользователь не ищет приложение и не изучает меню. Он говорит, чего хочет:

- «Хочу сварить Гауду»
- «Сварить вкусного пивка»
- «Запиши меня к Марине на ногти в пятницу после 18:00»

Vimax Core распознаёт намерение, уточняет данные, подбирает модуль, строит безопасный план, запрашивает подтверждение значимых операций, выполняет действия и ведёт аудит.

## Архитектура

```text
User → Conversation Gateway → Intent Resolver → Policy Engine
     → Workflow Resolver → Module Registry → Modules/Connectors
     → Audit Log + Notifications
```

## Быстрый старт

```bash
cmake -S . -B build -DVIMAX_BUILD_TESTS=ON
cmake --build build
./build/vimax_demo
ctest --test-dir build --output-on-failure
```

Первая версия фиксирует контракты, маршрутизацию, безопасность и модульность. Реальные LLM, API и аппаратные адаптеры подключаются поверх интерфейсов.
