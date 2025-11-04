import SwiftUI

@main
struct WeightScaleApp: App {
    var body: some Scene {
        WindowGroup {
            ScaleView()
                .frame(width: 300, height: 200)
        }
    }
}

struct ScaleView: View {
    @State private var weight: Double = 70.0

    var body: some View {
        VStack(spacing: 20) {
            Text("Weight Scale")
                .font(.largeTitle)
                .bold()

            Text(String(format: "%.2f kg", weight))
                .font(.system(size: 40, weight: .semibold))
                .foregroundColor(.green)

            Slider(value: $weight, in: 0...200, step: 0.1)
                .padding()

            HStack {
                Button("Reset") {
                    weight = 70.0
                }
                .buttonStyle(.bordered)
                .tint(.red)
            }
        }
        .padding()
    }
}
